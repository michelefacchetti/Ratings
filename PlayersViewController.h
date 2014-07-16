//
//  PlayersViewController.h
//  Ratings
//
//  Created by developer on 09/07/14.
//
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController<PlayerDetailsViewControllerDelegate>
@property (nonatomic, strong) NSMutableArray *players;
@end
