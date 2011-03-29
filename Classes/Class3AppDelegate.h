//
//  Class3AppDelegate.h
//  Class3
//
//  Created by Alan Zeino on 29/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import	"Person.h"

@interface Class3AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	Person *p;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

