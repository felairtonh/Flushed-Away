//
//  FLAToyNode.h
//  Flushed Away
//
//  Created by Jonathan on 9/10/13.
//  Copyright (c) 2013 Piglettens, Ltd. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface FLAToyNode : SKSpriteNode
<FLACollisionNode>

/** Generate a random toy node */

+ (instancetype)randomToyNode;

/** Individual Toy Nodes */

+ (instancetype)bearToyNode;

+ (instancetype)bikeToyNode;

+ (instancetype)carToyNode;

+ (instancetype)duckToyNode;

+ (instancetype)horseToyNode;

+ (instancetype)planeToyNode;

+ (instancetype)scooterToyNode;

+ (instancetype)soldierToyNode;

@end
