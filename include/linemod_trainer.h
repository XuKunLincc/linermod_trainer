#ifndef __LINEMOD_TRAINER_H__
#define __LINEMOD_TRAINER_H__

#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "c_base_trainer.h"

using namespace hirop_vision;

/**
 * @brief       linemod算法的训练器
 * @author      XuKunLin
 * @date          2019-03-23
 */
class LinemodTrainer:public CBaseTrainer{

public:

    LinemodTrainer();

    ~LinemodTrainer();

    /**
     * @brief   linemod训练器的具体训练实现函数
     * @return  0 训练成功 -1 训练失败
     */
    int train();

    /**
     * @brief   解析Linemod算法的参数
     * @param
     * @return  0 成功 -1 失败
     */
    int parseConfig();

    /**
     * @brief   获取训练进度
     * @param
     * @return  0 > 获取失败 >=0 进度
     */
    int feedback();

    /**
     * @brief   保存训练结果
     * @param   保存路径
     * @return  0 成功 -1 失败
     */
    int saveData(std::string path);

    /**
     * @brief   删除训练结果
     * @param
     * @return  0 成功 -1 失败
     */
    int deleteData();

private:
    /**
     * @brief       初始化所有参数至默认数值
     */
    void initParam();

private:
    /**
     * @brief Linemod 相关的渲染参数
     */
    int param_n_points_;
    int param_angle_step_;
    double param_radius_min_;
    double param_radius_max_;
    double param_radius_step_;
    int param_width_;
    int param_height_;
    double param_near_;
    double param_far_;
    double param_focal_length_x_;
    double param_focal_length_y_;

    /**
     * @brief stl_path: 三维模型的路径
     */
    std::string meshPath;
    std::string objectName;

    std::vector<cv::Mat> Rs_;
    std::vector<cv::Mat> Ts_;
    std::vector<cv::Mat> Ks_;
    std::vector<float> distances_;
};

#endif
