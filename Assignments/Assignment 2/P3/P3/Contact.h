//
//  Contact.h
//  P3
//
//  Created by Aaron Wojnowski on 2015-11-07.
//  Copyright © 2015 CS Boys. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Contact : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *info;

-(instancetype)init;
-(instancetype)initWithContents:(NSDictionary *)contents;

-(NSDictionary *)serializedRepresentation;

@end