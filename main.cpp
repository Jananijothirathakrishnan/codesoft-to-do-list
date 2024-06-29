#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
int main() {
    cv::Mat image = cv::imread("input.jpg");
    if (image.empty()) {
        std::cout << "Error: Image not found!" << std::endl;
        return 1;
    }
    cv::Mat gray;
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);
    cv::Mat threshold;
    cv::threshold(gray, threshold, 127, 255, cv::THRESH_BINARY);
    cv::imwrite("output.jpg", threshold);

    return 0;
}
