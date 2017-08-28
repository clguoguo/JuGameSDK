//
//  JuGameSDK.h
//  Pods
//
//  Created by Magician on 2017/8/17.
//
//

#import <Foundation/Foundation.h>
#import "JGLoginManagerProtocol.h"
#import "JGPayManagerProtocol.h"
#import "JuGameSDKStatusCode.h"

@interface JuGameSDK : NSObject

/**
 *  获取SDK实例
 *
 *  @return SDK实例
 */
+ (instancetype)sharedSDK;

/**
 *  获取SDK版本号
 *
 *  @return SDK版本号
 */
- (NSString *)sdkVersion;

/**
 *  初始化SDK
 *
 *  @param cpId
 *  @param gameId
 */
- (void)registerWithCpId:(NSString *)cpId
                  gameId:(NSString *)gameId
              completion:(void(^)(NSError *error))completionBlock;


/**
 登录部分
 */
@property (nonatomic, strong, readonly) id<JGLoginManager> loginManager;


/**
 支付相关
 */
@property (nonatomic, strong, readonly) id<JGPayManager>   payManager;

@end
