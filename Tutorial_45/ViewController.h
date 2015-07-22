//
//  ViewController.h
//  Tutorial_45
//
//  Created by Admin on 22.07.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

/*!
 @header ViewController.h
 
 @brief This is the header file where my super-code is contained.
 
 This file contains the most importnant method and properties decalaration. It's parted by two methods in total, which can be used to perform temperature conversions.
 
 @author Admin
 @copyright  2015 Admin
 @version    15.12.7
 */
#import <UIKit/UIKit.h>
#import "AppDelegate.h"

/*!
 @class ViewController
 
 @brief The ViewController class
 
 @discussion    This class was designed and implemented to help people covert temperatures between the Fahrenheit and Celsius scales.
 
 @superclass SuperClass: UIViewController\n
 @classdesign    No special design is applied here.
 @coclass    AppDelegate
 @helps It helps no other classes.
 @helper    No helper exists for this class.
 */

/*!
 @protocol ViewControllerDelegate
 
 @brief The ViewControllerDelegate protocol
 
 It's a protocol used as a demo here. In a real application it would be quite useful.
 */
@protocol ViewControllerDelegate

/*!
 Nothing to say here... Just testing documentation.
 */
-(void)thisIsADelegateMethod;

@end

/*!
 @typedef WeatherConditionsInDays
 
 @brief  A struct about the weather.
 
 @discussion
 The values of this structure represent how many sunny, cloudy, rainy, and snowy days existed over the last year. If this was a real app, they could be perfectly used.
 
 @field sun Good weather
 @field clouds  Where's the sun?
 @field rain    Get an umbrella
 @field snow    Watch out... A snowball is coming!
 */
typedef struct {
    /*! Good weather */
    int sun;
    /*! At least it's not raining */
    int clouds;
    /*! Don't forget to get your umbrella */
    int rain;
    /*! Time to go skiiiiiing */
    int snow;
}

WeatherConditionsInDays;

@interface ViewController : UIViewController

/*!
 @brief It converts temperature degrees from Fahrenheit to Celsius scale.
 
 @discussion This method accepts a float value representing the temperature in <b>Fahrenheit</b> scale and it converts it to the <i>Celsius</i> scale.
 
 To use it, simply call @c[self toCelsius: 50];
 
 @param  fromFahrenheit The input value representing the degrees in the Fahrenheit scale.
 
 @return float The degrees in the Celsius scale.
 */

-(float)toCelcius:(float)fromFahrenheit;

/*!
 @brief It converts temperature degrees from Celsius to Fahrenheit scale.
 
 @param  fromCelcius The celsius degrees value.
 
 @return float The degrees in the Fahrenheit scale.
 
 @code
 float f = [self toCelsius:80];
 @endcode
 
 @remark This is a super-easy method.
 */

-(float)toFahrenheit:(float)fromCelcius;

/*! An application delegate object. */
@property (nonatomic, strong) AppDelegate *appDelegate;

@end

