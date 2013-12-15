//
//  MasterViewController.h
//  ImageUploader
//
//  Created by Jacob Ruiz on 12/15/13.
//  Copyright (c) 2013 Symphny. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
