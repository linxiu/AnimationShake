//
//  PaintingWindow.m
//  AnimationShake
//
//  Created by linxiu on 16/5/3.
//  Copyright © 2016年 甘真辉. All rights reserved.
//

#import "PaintingWindow.h"

@implementation PaintingWindow

-(void)motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event{

}

-(void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event{

    if (motion== UIEventSubtypeMotionShake) {
        
        
        [[NSNotificationCenter defaultCenter]postNotificationName:@"shake" object:self];
    }

}
-(void)motionCancelled:(UIEventSubtype)motion withEvent:(UIEvent *)event{


}
@end
