//
//  ViewController.h
//  AnimationShake
//
//  Created by linxiu on 16/5/3.
//  Copyright © 2016年 甘真辉. All rights reserved.
//

#import <UIKit/UIKit.h>

//t添加
#import <QuartzCore/QuartzCore.h>
#import <AudioToolbox/AudioToolbox.h>

@interface ViewController : UIViewController


@property (nonatomic,strong)IBOutlet UIImageView *imgUp;
@property (nonatomic,strong)IBOutlet UIImageView *imgDown;

@property (nonatomic,strong)IBOutlet UIButton *controlBtn;
@property (nonatomic,assign)SystemSoundID  soundID;
@property (nonatomic,strong)IBOutlet UIActivityIndicatorView *aiLoad;

-(IBAction)clickControlButton:(id)sender;

@end

