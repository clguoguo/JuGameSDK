//
//  JGOrderInfo.h
//  Pods
//
//  Created by Magician on 2017/8/21.
//
//

#import <Foundation/Foundation.h>

@interface JGOrderInfo : NSObject

/**
 订单Id
 */
@property (nonatomic, strong) NSString *orderId;

/**
 支付方式
 */
@property (nonatomic, strong) NSNumber *paywayId;

/**
 支付名称
 */
@property (nonatomic, strong) NSString *paywayName;

/**
 金额
 */
@property (nonatomic, strong) NSNumber *amount;

@end
