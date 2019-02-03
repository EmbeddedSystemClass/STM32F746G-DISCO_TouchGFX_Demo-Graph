/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAIN_VIEW_BASE_HPP
#define MAIN_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}

    virtual void setupScreen();

    /*
     * Custom Action Handlers
     */
    virtual void increaseValue()
    {
        // Override and implement this function in MainView
    }

    virtual void decreaseValue()
    {
        // Override and implement this function in MainView
    }

    virtual void addValue()
    {
        // Override and implement this function in MainView
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backgroundBox;
    touchgfx::Image backgroundImage;
    touchgfx::Container container1;
    touchgfx::Image counterBackgroundImage;
    touchgfx::TextAreaWithOneWildcard countTxt;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::RepeatButtonTrigger > > flexBtnUp;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::RepeatButtonTrigger > > flexBtnDown;
    touchgfx::TextButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > flexBtnSet;


    /*
     * Wildcard Buffers
     */
    static const uint16_t COUNTTXT_SIZE = 3;
    touchgfx::Unicode::UnicodeChar countTxtBuffer[COUNTTXT_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

};

#endif // MAIN_VIEW_BASE_HPP
