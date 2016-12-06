//
//  AppDelegate.h
//  MosCapture
//
//  Created by Uaena Mo on 07/12/2016.
//  Copyright © 2016 Mos_tec. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

