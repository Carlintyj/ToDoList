//
//  ToDoItem.h
//  ToDoList
//
//  Created by Nik Bisht on 12/30/14.
//  Copyright (c) 2014 Nik Bisht. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
