//
//  MainViewController.h
//  AudioDemo
//
//  Created by lincoln.liu on 7/9/13.
//  Copyright (c) 2013 xianlinbox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface MainViewController : UIViewController<AVAudioPlayerDelegate,AVAudioRecorderDelegate>

@property (strong, nonatomic) AVAudioRecorder *audioRecorder;
@property (strong, nonatomic) AVAudioPlayer *audioPlayer;

@property (nonatomic, weak) IBOutlet UIButton *recordButton;
@property (nonatomic, weak) IBOutlet UIButton *playButton;

-(IBAction)recordButtonAction:(id)sender;
-(IBAction)playButtonAction:(id)sender;

@end
