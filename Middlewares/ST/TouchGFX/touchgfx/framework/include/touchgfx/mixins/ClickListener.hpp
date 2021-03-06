/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.10.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef CLICKLISTENER_HPP
#define CLICKLISTENER_HPP

#include <touchgfx/Callback.hpp>

namespace touchgfx
{
/**
 * @class ClickListener ClickListener.hpp touchgfx/mixins/ClickListener.hpp
 *
 * @brief Mix-in class that extends a class with a click action event.
 *
 *        Mix-in class that extends a class with a click action event that is called when the
 *        class receives a click event.
 *
 * @tparam T specifies the type to extend with the ClickListener behavior.
 */
template<class T>
class ClickListener : public T
{
public:

    /**
     * @fn ClickListener::ClickListener()
     *
     * @brief Default constructor.
     *
     *        Default constructor.
     */
    ClickListener() : T(), clickAction(0)
    {
        T::setTouchable(true);
    }

    /**
     * @fn virtual ClickListener::~ClickListener()
     *
     * @brief Destructor.
     */
    virtual ~ClickListener() { }

    /**
     * @fn virtual void ClickListener::handleClickEvent(const ClickEvent& event)
     *
     * @brief Ensures that the clickEvent is propagated to the super class.
     *
     *         Ensures that the clickEvent is propagated to the super class T and to the
     *         clickAction listener.
     *
     * @param event Information about the click.
     *
     * @see Drawable::handleClickEvent()
     */
    virtual void handleClickEvent(const ClickEvent& event)
    {
        T::handleClickEvent(event);
        if (clickAction && clickAction->isValid())
        {
            clickAction->execute(*this, event);
        }
    }

    /**
     * @fn void ClickListener::setClickAction(GenericCallback< const T&, const ClickEvent& >& callback)
     *
     * @brief Associates an action to be performed when the class T is clicked.
     *
     *        Associates an action to be performed when the class T is clicked.
     *
     * @param callback The callback to be executed. The callback will be given a reference to T.
     *
     * @see GenericCallback
     */
    void setClickAction(GenericCallback< const T&, const ClickEvent& >& callback)
    {
        clickAction = &callback;
    }

protected:
    GenericCallback<const T&, const ClickEvent&>* clickAction;  ///< The callback to be executed when T is clicked
};
} //namespace touchgfx

#endif // CLICKLISTENER_HPP
