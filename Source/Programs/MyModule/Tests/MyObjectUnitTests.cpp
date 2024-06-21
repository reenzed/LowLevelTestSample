#include "CoreMinimal.h"
#include "TestHarness.h"

#include "MyObject.h"

namespace LowLevelTestSample {
	TEST_CASE("LowLevelTestSample::MyModule::UObject", "[unit]")
	{
		SECTION("Sample")
		{
			auto* MyObject = NewObject<UMyObject>();
			CHECK(MyObject != nullptr);
		}
	}
}