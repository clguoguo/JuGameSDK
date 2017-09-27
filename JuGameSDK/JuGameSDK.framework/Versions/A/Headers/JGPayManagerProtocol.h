//
//  JGPayManagerProtocol.h
//  Pods
//
//  Created by Magician on 2017/8/17.
//
//

#ifndef JGPayManagerProtocol_h
#define JGPayManagerProtocol_h

#import "JGPayRequest.h"
#import "JGOrderInfo.h"
#import "JuGameSDKStatusCode.h"

@protocol JGPayManager <NSObject>

/**
 支付，不指定当前控制器，支付页面默认添加到根控制器视图
 
 @param request 支付请求参数
 @param completion 回调
 */
- (void)payRequest:(JGPayRequest *)request
        completion:(void (^)(JGOrderInfo *response, NSError *error))completion;


/**
 支付，需指定当前控制器时调用，若不指定则传nil，支付页面默认添加到根控制器视图
 @param sender 调起支付的控制器
 @param request 支付请求参数
 @param completion 回调
 */
- (void)payViewController:(UIViewController *)sender
                  request:(JGPayRequest *)request
               completion:(void (^)(JGOrderInfo *response, NSError *error))completion;
@end

#endif /* JGPayManagerProtocol_h */
