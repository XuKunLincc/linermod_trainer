/*
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2019, Foshan Huashu Robotics Co.,Ltd
 * All rights reserved.
 *
 * Author: Kunlin Xu <1125290220@qq.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *      * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *      * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *      * Neither the name of the Southwest Research Institute, nor the names
 *      of its contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 */
#ifndef __IDETERCTOR_H__
#define __IDETERCTOR_H__

#include <iostream>
#include "vision.h"

namespace hirop_vision{

/**
 * @brief       具体识别算法识别器基类
 * @author      XuKunLin
 * @date        2019-03-19
 */
class IDetector{

public:
    /**
     * @brief   实现具体的识别功能，需要具体的识别器实现
     * @return void
     */
    virtual int detection() = 0;

//    /**
//     * @brief   解析识别器私有训练器配置，具体由相关识别器实现
//     * @return void
//     */
//    virtual int parseConfig() = 0;

    /**
     * @brief   加载相关识别器识别时需要的数据
     * @return void
     */
    virtual int loadData(std::string objectName) = 0;

//    /**
//     * @brief   传递识别需要的图片数据
//     * @return void
//     */
//    virtual void setImg() = 0;

//    /**
//     * @brief   获取识别过程中的预览图片
//     * @return void
//     */
//    virtual void getImg() = 0;

    /**
     * @brief  获取图像识别过程中的结果
     * @return void
     */
    virtual int getResult(pose &p) = 0;

protected:
    // 保存识别器的字符描述
    std::string name;

    // 是否会输出相关的预览图片
    bool havePreviewImage;

    // 其算法实现类别 C++ / Python
    hirop_vision::ENTITY_TYPE entityType;


};

}

#endif
