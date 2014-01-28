//
//  WTSAppDelegate.h
//  ASL Word to Sign
//
//  Created by Tim Swihart on 1/27/14.
//  Copyright (c) 2014 Tim Swihart. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

#import "AFHTTPRequestOperationManager.h"


@interface WTSAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property AFHTTPRequestOperationManager *httpManager;
@property NSRegularExpression *cleanupRegex;
@property NSString *searchBaseURL;
@property NSString *vidBaseURL;

@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSTextField *textLabel;
@property (weak) IBOutlet NSButton *translateButton;
@property (weak) IBOutlet WebView *webView;


- (IBAction)translate:(id)sender;

- (IBAction)saveAction:(id)sender;

@end
