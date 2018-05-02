//
//  Person+CoreDataProperties.h
//  CoreDataDemo
//
//  Created by sjimac01 on 2018/5/2.
//  Copyright © 2018年 sjimac01. All rights reserved.
//
//

#import "Person+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Person (CoreDataProperties)

+ (NSFetchRequest<Person *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *personID;
@property (nullable, nonatomic, copy) NSString *name;
@property (nonatomic) int16_t age;
@property (nullable, nonatomic, copy) NSString *photo;

@end

NS_ASSUME_NONNULL_END
