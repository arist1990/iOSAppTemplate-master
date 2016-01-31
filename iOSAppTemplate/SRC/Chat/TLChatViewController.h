//
//  TLChatViewController.h
//  iOSAppTemplate
//
//  Created by 李伯坤 on 15/9/24.
//  Copyright (c) 2015年 lbk. All rights reserved.
//

#import "CommonViewController.h"
#import "TLChatMessageViewContrller.h"
#import "TLChatBoxViewController.h"
#import "TLUser.h"

@interface TLChatViewController : CommonViewController<TLChatMessageViewControllerDelegate, TLChatBoxViewControllerDelegate> {
    CGFloat viewHeight;
}

@property (nonatomic, strong) TLUser *user;

@property (nonatomic, strong) TLChatMessageViewContrller *chatMessageVC;
@property (nonatomic, strong) TLChatBoxViewController *chatBoxVC;

@end
