//
//  AppDelegate.h
//  SpiritLevelCircle
//
//  Created by Stephanie Sharp on 3/05/13.
//  Copyright (c) 2013 Stephanie Sharp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic, readonly) CMMotionManager *sharedManager;

@end
