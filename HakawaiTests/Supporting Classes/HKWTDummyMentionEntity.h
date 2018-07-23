//
//  HKWTDummyMentionEntity.h
//  Hakawai
//
//  Copyright (c) 2018 LinkedIn Corp. All rights reserved.
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with
//  the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
//  an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//

#import "HKWMentionsEntityProtocol.h"

@interface HKWTDummyMentionEntity : NSObject <HKWMentionsEntityProtocol>

@property (nonatomic, strong) NSString *entityId;
@property (nonatomic, strong) NSString *entityName;
@property (nonatomic, strong) NSDictionary *entityMetadata;

+ (instancetype)entityWithName:(NSString *)name
                      entityID:(NSString *)entityId;

@end
