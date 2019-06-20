//
//  DetailViewController.h
//  GraphicsAndAnimation
//
//  Created by XieLinFu_Mac on 2019/6/20.
//  Copyright © 2019 XieLinFu_Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

