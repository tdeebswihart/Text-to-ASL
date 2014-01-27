//
//  WTSAppDelegate.h
//  ASL Word to Sign
//
//  Created by Tim Swihart on 1/27/14.
//  Copyright (c) 2014 Tim Swihart. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface WTSAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSTextField *textLabel;
@property (weak) IBOutlet NSButton *translateButton;

- (IBAction)translate:(id)sender;

- (IBAction)saveAction:(id)sender;

@end
