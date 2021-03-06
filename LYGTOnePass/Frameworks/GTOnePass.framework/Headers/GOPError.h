//
//  GOPError.h
//  GTOnePass
//
//  Created by noctis on 2018/10/15.
//  Copyright © 2018 geetest. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSErrorUserInfoKey const GOPErrorDomain;

FOUNDATION_EXPORT NSErrorUserInfoKey const GOPErrorOriginalErrorKey;
FOUNDATION_EXPORT NSErrorUserInfoKey const GOPFailingURLErrorKey;
FOUNDATION_EXPORT NSErrorUserInfoKey const GOPMetadataErrorKey;

typedef NS_ENUM(NSUInteger, GOPErrorCode) {
    // Client Error
    GOPErrorInvalidPhoneNumber          = -20301,
    GOPErrorUnsupportedNetwork          = -20302,
    GOPErrorUnsupportedOperator         = -20303,
    GOPErrorEmptyOperatorURL            = -20304,
    // Network Error
    GOPErrorGenericNetworkError         = -39900,
    GOPErrorSocketError                 = -39901,
    GOPErrorReceiveEmptyDataError       = -39902,
    // Operator Error
    GOPErrorCMGetTokenFail              = -40101,
    GOPErrorCMUnsupportedNetwork        = -40104,
    GOPErrorCUGetTokenFail              = -40201,
    GOPErrorCUUnsupportedNetwork        = -40204,
    GOPErrorCTGetTokenFail              = -40301,
    GOPErrorCTResultParseError          = -40302,
    GOPErrorCTUnsupportedNetwork        = -40304,
    GOPErrorOperatorUnknownError        = -49900,
    // Server Error
    GOPErrorInvalidPreGatewayReturns    = -50100,
};

@interface GOPError : NSError

- (instancetype)initWithCode:(GOPErrorCode)code userInfo:(NSDictionary *)dict;
+ (instancetype)errorWithCode:(GOPErrorCode)code userInfo:(NSDictionary *)dict;

- (instancetype)initWithCode:(GOPErrorCode)code description:(NSString *)description;
+ (instancetype)errorWithCode:(GOPErrorCode)code description:(NSString *)description;

@end
