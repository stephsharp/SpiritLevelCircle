//
//  SpiritLevelViewController.h
//  SpiritLevelCircle
//
//  Created by Stephanie Sharp on 3/05/13.
//  Copyright (c) 2013 Stephanie Sharp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

// Constants
static const float viewInset = 14.0f;
static const float acceptableDistance = 12.0f;
static const NSTimeInterval deviceMotionMin = 0.02;

@interface SpiritLevelViewController : UIViewController

// Properties
@property (nonatomic, strong) CMMotionManager * motionManager;
@property (nonatomic, strong) NSOperationQueue * queue;

// Outlets
@property (nonatomic, weak) IBOutlet UIImageView * ball;

@end
