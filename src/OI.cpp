// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ServoCenter.h"
#include "Commands/ServoLeft.h"
#include "Commands/ServoRight.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	xboxOne = new Joystick(0);
	
	servoButtonCenter = new JoystickButton(xboxOne, 3);
	servoButtonCenter->WhenReleased(new ServoCenter());
	servoButtonLeft = new JoystickButton(xboxOne, 2);
	servoButtonLeft->WhileHeld(new ServoLeft());
	servoButtonRight = new JoystickButton(xboxOne, 1);
	servoButtonRight->WhenPressed(new ServoRight());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("ServoRight", new ServoRight());
	SmartDashboard::PutData("ServoCenter", new ServoCenter());
	SmartDashboard::PutData("ServoLeft", new ServoLeft());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getXboxOne() {
	return xboxOne;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
