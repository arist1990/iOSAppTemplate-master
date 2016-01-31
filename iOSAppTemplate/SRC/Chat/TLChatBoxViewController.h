//
//  TLChatBoxViewController.h
//  iOSAppTemplate
//
//  Created by libokun on 15/10/16.
//  Copyright (c) 2015年 lbk. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TLMessage.h"

#import "TLChatBox.h"
#import "TLChatBoxMoreView.h"
#import "TLChatBoxFaceView.h"

@class TLChatBoxViewController;

@protocol TLChatBoxViewControllerDelegate <NSObject>
- (void) chatBoxViewController:(TLChatBoxViewController *)chatboxViewController didChangeChatBoxHeight:(CGFloat)height;
- (void) chatBoxViewController:(TLChatBoxViewController *)chatboxViewController sendMessage:(TLMessage *)message;
@end


@interface TLChatBoxViewController : UIViewController

@property id<TLChatBoxViewControllerDelegate>delegate;


@property (nonatomic, strong) TLChatBox *chatBox;
@property (nonatomic, strong) TLChatBoxMoreView *chatBoxMoreView;
@property (nonatomic, strong) TLChatBoxFaceView *chatBoxFaceView;


@end
