#pragma once
#include <BWAPI.h>
#include "TestCase.h"
class TestModule : public BWAPI::AIModule
{
  public:
    TestModule();
    ~TestModule();
    virtual void onFrame();
    void runTestCases();
    void addTestCase(TestCase* testCase);
    TestCase* getCurrentTestCase() const;
  private:
    std::list<TestCase*> testCases;
    TestCase* currentTestCase;
};