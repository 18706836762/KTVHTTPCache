//
//  KTVHCDataSourceQueue.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/11.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KTVHCDataSourceProtocol.h"
#import "KTVHCDataNetworkSource.h"

@interface KTVHCDataSourceQueue : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)sourceQueue;

- (void)putSource:(id<KTVHCDataSourceProtocol>)source;
- (void)popSource:(id<KTVHCDataSourceProtocol>)source;
- (void)sortSources;

- (id<KTVHCDataSourceProtocol>)fetchFirstSource;
- (id<KTVHCDataSourceProtocol>)fetchNextSource:(id<KTVHCDataSourceProtocol>)currentSource;

- (KTVHCDataNetworkSource *)fetchFirstNetworkSource;
- (KTVHCDataNetworkSource *)fetchNextNetworkSource:(KTVHCDataNetworkSource *)currentSource;

@end