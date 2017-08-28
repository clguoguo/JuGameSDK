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
 支付

 @param request 支付请求参数
 @param completion 回调
 */
- (void)payRequest:(JGPayRequest *)request
        completion:(void (^)(JGOrderInfo *response, NSError *error))completion;

@end

#endif /* JGPayManagerProtocol_h */
