////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2016, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <UIKit/UIKit.h>

@class Model;

@interface StoryboardDetailViewController : UIViewController

@property (strong, nonatomic) Model *model;
@property (assign, nonatomic) NSInteger countOfModelInstanceInjections;

@end
