//
//  ViewController.m
//  Tutorial_45
//
//  Created by Admin on 22.07.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
/*! @brief This property knows my name. */
@property (nonatomic, strong) NSString *myName;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(float)toCelcius:(float)fromFahrenheit{
    return (fromFahrenheit - 32) / 1.8;
}

-(float)toFahrenheit:(float)fromCelcius{
    return fromCelcius * 1.8 + 32;
}

@end
