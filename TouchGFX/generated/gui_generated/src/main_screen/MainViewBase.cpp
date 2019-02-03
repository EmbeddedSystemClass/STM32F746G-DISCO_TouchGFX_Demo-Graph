/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    flexButtonCallback(this, &MainViewBase::flexButtonCallbackHandler)
{
    backgroundBox.setPosition(0, 0, 800, 480);
    backgroundBox.setVisible(false);
    backgroundBox.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    backgroundImage.setXY(0, 0);
    backgroundImage.setBitmap(Bitmap(BITMAP_BG_ID));

    container1.setPosition(0, 204, 480, 68);

    counterBackgroundImage.setXY(111, 0);
    counterBackgroundImage.setBitmap(Bitmap(BITMAP_COUNTER_BOX_ID));
    container1.add(counterBackgroundImage);

    countTxt.setPosition(111, 7, 152, 42);
    countTxt.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    countTxt.setLinespacing(0);
    Unicode::snprintf(countTxtBuffer, COUNTTXT_SIZE, "%s", TypedText(T_SINGLEUSEID1).getText());
    countTxt.setWildcard(countTxtBuffer);
    countTxt.setTypedText(TypedText(T_TEXTID1));
    container1.add(countTxt);

    flexBtnUp.setDelay(15);
    flexBtnUp.setInterval(6);
    flexBtnUp.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    flexBtnUp.setBitmapXY(0, 0);
    flexBtnUp.setIconBitmaps(Bitmap(BITMAP_BLACK_ARROW_UP_ID), Bitmap(BITMAP_ORANGE_ARROW_UP_ID));
    flexBtnUp.setIconXY(35, 19);
    flexBtnUp.setPosition(5, 0, 100, 56);
    flexBtnUp.setAction(flexButtonCallback);
    container1.add(flexBtnUp);

    flexBtnDown.setDelay(15);
    flexBtnDown.setInterval(6);
    flexBtnDown.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    flexBtnDown.setBitmapXY(0, 0);
    flexBtnDown.setIconBitmaps(Bitmap(BITMAP_BLACK_ARROW_ID), Bitmap(BITMAP_ORANGE_ARROW_ID));
    flexBtnDown.setIconXY(35, 19);
    flexBtnDown.setPosition(268, 0, 100, 56);
    flexBtnDown.setAction(flexButtonCallback);
    container1.add(flexBtnDown);

    flexBtnSet.setBitmaps(Bitmap(BITMAP_SMALL_BTN_ID), Bitmap(BITMAP_SMALL_BTN_PRESSED_ID));
    flexBtnSet.setBitmapXY(0, 0);
    flexBtnSet.setText(TypedText(T_SINGLEUSEID2));
    flexBtnSet.setTextPosition(0, 8, 100, 56);
    flexBtnSet.setTextColors(touchgfx::Color::getColorFrom24BitRGB(78, 78, 78), touchgfx::Color::getColorFrom24BitRGB(200, 146, 34));
    flexBtnSet.setPosition(374, 0, 100, 56);
    flexBtnSet.setAction(flexButtonCallback);
    container1.add(flexBtnSet);

    add(backgroundBox);
    add(backgroundImage);
    add(container1);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexBtnUp)
    {
        //IncreaseValue
        //When flexBtnUp clicked call virtual function
        //Call increaseValue
        increaseValue();
    }
    else if (&src == &flexBtnDown)
    {
        //DecreaseValue
        //When flexBtnDown clicked call virtual function
        //Call decreaseValue
        decreaseValue();
    }
    else if (&src == &flexBtnSet)
    {
        //InteractionAdd
        //When flexBtnSet clicked call virtual function
        //Call addValue
        addValue();
    }
}
