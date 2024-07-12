pipeline {
    agent any
    
    stages {
        stage('SCM') {
            steps {
                checkout scm
            }
        }
        
        stage('SonarQube Analysis') {
            environment {
                scannerHome = tool name: 'SonarQube Scanner', type: 'hudson.plugins.sonar.SonarRunnerInstallation'
            }
            steps {
                withSonarQubeEnv('SonarQube Scanner') {
                    // Use a direct call to sonar-scanner without 'nohup' which is not needed on Windows
                    bat "${scannerHome}\\bin\\sonar-scanner.bat"
                }
            }
        }
    }
}
