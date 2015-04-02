//
//  XXBQRCodeVC.h
//  二维码扫描
//
//  Created by 杨小兵 on 15/4/2.
//  Copyright (c) 2015年 xiaoxiaobing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface XXBQRCodeVC : UIViewController<AVCaptureMetadataOutputObjectsDelegate>
{
    int num;
    BOOL upOrdown;
    NSTimer * timer;
}
@property (strong,nonatomic)AVCaptureDevice * device;
@property (strong,nonatomic)AVCaptureDeviceInput * input;
@property (strong,nonatomic)AVCaptureMetadataOutput * output;
@property (strong,nonatomic)AVCaptureSession * session;
// 拍摄二维码的layer
@property (strong,nonatomic)AVCaptureVideoPreviewLayer * preview;
@property (nonatomic, retain) UIImageView * line;
@end
