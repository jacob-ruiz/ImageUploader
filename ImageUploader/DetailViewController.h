//
//  DetailViewController.h
//  ImageUploader
//
//  Created by Jacob Ruiz on 12/15/13.
//  Copyright (c) 2013 Symphny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
