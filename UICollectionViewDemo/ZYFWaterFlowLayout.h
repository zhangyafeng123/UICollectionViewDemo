//
//  ZYFWaterFlowLayout.h
//  UICollectionViewDemo
//
//  Created by linjianguo on 2018/7/2.
//  Copyright © 2018年 com.justsee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZYFWaterFlowLayout;
@protocol ZYFWaterFlowLayoutDelegate <NSObject>
@required
/** 计算item高度的代理方法，将item的高度与indexPath传递个外界 **/
- (CGFloat)waterfallLayout:(ZYFWaterFlowLayout *)waterfallLayout itemHeightForWidth:(CGFloat)itemWidth atIndexPath:(NSIndexPath *)indexPath;

@end

@interface ZYFWaterFlowLayout : UICollectionViewFlowLayout

/** 实现瀑布流 **/
#pragma mark ---- 属性 ----
/** 总共多少列,默认是2  **/
@property(nonatomic, assign) NSInteger columnCount;
/** 列间距，默认是0 **/
@property(nonatomic, assign) NSInteger columnSpacing;
/** 行间距，默认是0 **/
@property(nonatomic, assign) NSInteger rowSpacing;
/** section与collectionView的间距，默认是(0,0,0,0) **/
@property(nonatomic, assign) UIEdgeInsets sectionInset;
/** 同时设置列间距，行间距，sectionInset **/
- (void)setColumnSpacing:(NSInteger)columnSpacing rowSpacing:(NSInteger)rowSpacing sectionInset:(UIEdgeInsets)sectionInset;
/**
 以下代理属性与block属性二选一，用来设置每一个item的高度
 会将item的宽度与indexPath传递给外界
 如果两个都设置，block的优先级高，即代理无效
 */

//代理，用来计算item的高度
@property(nonatomic, weak) id<ZYFWaterFlowLayoutDelegate> delegate;
/** 计算item高度的block,将item的高度与indexPath传递给外界 **/
@property (nonatomic, strong) CGFloat (^itemHeightBlock)(CGFloat itemWidth,NSIndexPath *indexPath);

#pragma mark ---- 构造方法 ----
+ (instancetype)waterFallLayoutWithColumnCount:(NSInteger)columnCount;
- (instancetype)initWithColumnCount:(NSInteger)columnCount;















@end
