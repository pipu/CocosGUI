/*
 * Copyright (c) 2012 Chukong Technologies, Inc.
 *
 * http://www.sweetpome.com
 * http://tools.cocoachina.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to permit
 * persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __CocoGUI__Label__
#define __CocoGUI__Label__

#include "CocoWidget.h"
#include "UIText.h"

namespace cs {
    class CocoLabel : public CocoWidget
    {
    public:
        CocoLabel();
        virtual ~CocoLabel();
        static CocoLabel* create();
//        static CocoLabel* create(cocos2d::CCDictionary* options);
//        static CocoLabel* createWithJson(sp::SPJsonDictionary* options);
        virtual bool init();
//        virtual bool initWithOptions(cocos2d::CCDictionary* options);
//        virtual bool initWithOptions_json(sp::SPJsonDictionary* options);
        void setText(const char* text);
        const char* getStringValue();
        int getStringLength();
        void setTextColor(int r,int g,int b);
        void setFontSize(int size);
        void setFontName(const char* name);
        void setTouchScaleChangeAble(bool able);
        bool getTouchScaleChangeAble();
        virtual void onPressStateChangedToNormal();
        virtual void onPressStateChangedToPressed();
        virtual void onPressStateChangedToDisabled();
        void clickScale(float scale);
        virtual CRenderNode* getValidNode();
        virtual void setAnchorPoint(const cocos2d::CCPoint &pt);
        virtual void setFlipX(bool flipX);
        virtual void setFlipY(bool flipY);
        void setGravity(int gravity);
        virtual void setColor(int r,int g,int b);
        virtual void setOpacity(int opcity);
        virtual void adaptSize(float xProportion,float yProportion);
    protected:
        bool m_bTouchScaleChangeAble;
        float m_fNormalScaleValue;
        UIText* m_pTextLable;
        int m_nGravity;
        std::string m_sFontName;
        int m_nFontSize;
        float m_fOnSelectedScaleOffset;
    };
}

#endif /* defined(__CocoGUI__Label__) */
