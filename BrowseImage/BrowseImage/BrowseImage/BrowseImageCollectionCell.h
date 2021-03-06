//
//  BrowseImageCollectionCell.h
//  BrowseImage
//
//  Created by zhanglongtao on 17/1/16.
//  Copyright © 2017年 hanju001. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BrowseImageCollectionCell : UICollectionViewCell<UIScrollViewDelegate>
@property (strong, nonatomic) UIImageView *contentImageView;
@property(nonatomic,strong) NSString *imageUrl;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

@end
