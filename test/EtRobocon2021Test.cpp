#include "../module/EtRobocon2021.h" // このヘッダファイルのcppファイルをテスト
#include <gtest/gtest.h>

namespace etrobocon2021_test
{

    class EtRobocon2021Test : public ::testing::Test
    {
        friend class EtRobocon2021;

    protected:
        virtual void SetUp() {}
        EtRobocon2021 et;
    };

    TEST_F(EtRobocon2021Test, startTest) {}
} // namespace etrobocon2021_test