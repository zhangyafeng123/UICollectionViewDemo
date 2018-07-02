//
//  ZYFCollectionViewCell.m
//  UICollectionViewDemo
//
//  Created by linjianguo on 2018/7/2.
//  Copyright © 2018年 com.justsee. All rights reserved.
//

#import "ZYFCollectionViewCell.h"
#import <UIImageView+WebCache.h>
@implementation ZYFCollectionViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}
- (void)setImageURL:(NSURL *)imageURL {
    _imageURL = imageURL;
    [self.imageVVV sd_setImageWithURL:imageURL placeholderImage:[UIImage imageNamed:@"placeholder"]];
}
@end
