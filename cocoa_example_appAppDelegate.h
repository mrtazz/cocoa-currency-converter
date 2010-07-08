//
//  cocoa_example_appAppDelegate.h
//  cocoa-example-app
//
//  Created by Daniel Schauenberg on 7/7/10.
//  Copyright 2010 Steinbeis Transfercenter for Embedded Design And Networking. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface cocoa_example_appAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
