//
//  FLABoatNode.h
//  Flushed Away
//
//  Created by Jonathan on 9/10/13.
//  Copyright (c) 2013 Piglettens, Ltd. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface FLABoatNode : SKSpriteNode
<FLACollisionNode>

@property (assign, nonatomic) CGFloat health;

@end
