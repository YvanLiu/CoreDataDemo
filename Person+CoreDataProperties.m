//
//  Person+CoreDataProperties.m
//  CoreDataDemo
//
//  Created by sjimac01 on 2018/5/2.
//  Copyright © 2018年 sjimac01. All rights reserved.
//
//

#import "Person+CoreDataProperties.h"

@implementation Person (CoreDataProperties)

+ (NSFetchRequest<Person *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"Person"];
}

@dynamic personID;
@dynamic name;
@dynamic age;
@dynamic photo;

@end
