//
//  PlayerCell.h
//  Ratings
//
//  Created by developer on 14/07/14.
//
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewController

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
