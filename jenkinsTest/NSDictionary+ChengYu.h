//
//  NSDictionary+PayTool.h
//  PayTool
//
//  Created by Ewenlong03 on 2019/9/29.
//  Copyright © 2019 BeeCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary(ChengYu)
#pragma mark - 安全操作
- (BOOL)hasKey:(NSString *)key;

- (NSString *)stringForKey:(id)key;
- (NSNumber *)numberForKey:(id)key;
- (NSArray *)arrayForKey:(id)key;
- (NSDictionary *)dictionaryForKey:(id)key;
- (NSInteger)integerForKey:(id)key;
- (NSUInteger)unsignedIntegerForKey:(id)key;
- (BOOL)boolForKey:(id)key;

- (int16_t)int16ForKey:(id)key;
- (int32_t)int32ForKey:(id)key;
- (int64_t)int64ForKey:(id)key;

- (char)charForKey:(id)key;
- (short)shortForKey:(id)key;
- (float)floatForKey:(id)key;
- (double)doubleForKey:(id)key;
- (long long)longLongForKey:(id)key;
- (unsigned long long)unsignedLongLongForKey:(id)key;

- (CGFloat)CGFloatForKey:(id)key;
- (CGPoint)pointForKey:(id)key;
- (CGSize)sizeForKey:(id)key;
- (CGRect)rectForKey:(id)key;




#pragma mark - 合并
+ (NSDictionary *)dictionaryByMerging:(NSDictionary *)dict1
                                 with:(NSDictionary *)dict2;
- (NSDictionary *)dictionaryByMergingWith:(NSDictionary *)dict;

#pragma mark - json
- (NSString *)JSONString;

- (void)test;
- (void)hahah;






@end

NS_ASSUME_NONNULL_END
