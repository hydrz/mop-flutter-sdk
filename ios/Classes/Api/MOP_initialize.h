//
//  MOP_initialize.h
//  mop
//
//  Created by 杨涛 on 2020/2/27.
//

#import <UIKit/UIKit.h>
#import "MOPBaseApi.h"
NS_ASSUME_NONNULL_BEGIN

@interface MOP_initialize : MOPBaseApi

@property (nonatomic, copy) NSString *appkey;
@property (nonatomic, copy) NSString *secret;
@property (nonatomic, copy) NSString *apiServer;
@property (nonatomic, copy) NSString *apiPrefix;
@property (nonatomic, copy) NSString *cryptType;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, assign) BOOL disablePermission;
@property (nonatomic, assign) BOOL encryptServerData;

@end

NS_ASSUME_NONNULL_END
