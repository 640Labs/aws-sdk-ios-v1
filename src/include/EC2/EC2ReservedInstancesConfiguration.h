/*
 * Copyright 2010-2013 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */




/**
 * Reserved Instances Configuration
 */

@interface EC2ReservedInstancesConfiguration:NSObject

{
    NSString *availabilityZone;
    NSString *platform;
    NSNumber *instanceCount;
    NSString *instanceType;
}




/**
 * Default constructor for a new  object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * The Availability Zone for the modified Reserved Instances.
 */
@property (nonatomic, retain) NSString *availabilityZone;

/**
 * The network platform of the modified Reserved Instances, which is
 * either EC2-Classic or EC2-VPC.
 */
@property (nonatomic, retain) NSString *platform;

/**
 * The number of modified Reserved Instances.
 */
@property (nonatomic, retain) NSNumber *instanceCount;

/**
 * The instance type for the modified Reserved Instances.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Allowed Values: </b>t1.micro, m1.small, m1.medium, m1.large, m1.xlarge, m3.xlarge, m3.2xlarge, m2.xlarge, m2.2xlarge, m2.4xlarge, cr1.8xlarge, hi1.4xlarge, hs1.8xlarge, c1.medium, c1.xlarge, c3.large, c3.xlarge, c3.2xlarge, c3.4xlarge, c3.8xlarge, cc1.4xlarge, cc2.8xlarge, g2.2xlarge, cg1.4xlarge
 */
@property (nonatomic, retain) NSString *instanceType;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
