//
//  Person.h
//  Class3
//
//  Created by Alan Zeino on 29/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Person : NSObject 
{
	NSString *name;
	int age;
}

@property (retain) NSString *name;
@property (assign) int age;

@end
